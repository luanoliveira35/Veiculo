int main()
26  {
29
30     // create vector of four base-class pointers
31     vector < Empregado * > empregados( 4 );
32
33     // initialize vector with various kinds of Employees
34     empregados[ 0 ] = new EmpregadoAssalariado(              
35        "John", "Smith", "111-11-1111", 800 );           
36     empregados[ 1 ] = new EmpregadoHorista(                
37        "Karen", "Price", "222-22-2222", 16.75, 40 );    
38     empregados[ 2 ] = new EmpregadoDeComissao(            
39        "Sue", "Jones", "333-33-3333", 10000, .06 );     
40     empregados[ 3 ] = new EmpregadoDeComissaoMaisBase(    
41        "Bob", "Lewis", "444-44-4444", 5000, .04, 300 ); 
42
43     // polymorphically process each element in vector employees
44     for ( size_t i = 0; i < empregados.size(); i++ )
45     {
46        Empregado[ i ]->print(); // output employee information
47        
48
49        // downcast pointer                             
50        EmpregadodeComissaoMaisBase *derivedPtr =        
51           dynamic_cast < EmpregadoDeComissaoMaisBase * >
52              ( empregados[ i ] );                       
53
54        // determine whether element points to base-salaried
55        // commission employee
56        if ( derivedPtr !=0 ) // 0 if not a BasePlusCommissionEmployee
57        {
58           double SalarioBaseAntigo = derivedPtr->getSalarioBase();
59           cout << "Salario base antigo: $" << SalarioAntigo << endl;
60           derivedPtr->setSalarioBase( 1.10 * SalarioBaseAntigo );
61           cout << "Novo salario Base com acréscimo de 10%: $"
62              << derivedPtr->getSalarioBase() << endl;
63        } // end if
64
65        cout << "Salário a receber $" << empregados[ i ]->ganhos() << "\n\n";
66     } // end for
67
68     // release objects pointed to by vector's elements
69     for ( size_t j = 0; j < empregados.size(); j++ )
70     {
71        // output class name                           
72        cout << "deleting object of "                  
73           << typeid( *empregados[ j ] ).nome() << endl;
74
75        delete empregados[ j ];
76     } // end for
77
78     return 0;
79  } // end main