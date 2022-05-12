#include <cassert>
#include <string>

using namespace std::literals;

int main() 
{
    // tipo de dato INT
    assert( 4 == 4 );
    assert( 3 != 2 );
    assert( 1 < 2 );
    assert( 10 > 3 );
    assert( -5 < 5 );
    assert( 5 + 5 == 10 );
    assert( 10 / 2 == 5 );
    assert( 9 % 3 == 0 );
    // tipo de dato BOOLEAN
    assert( false == false );
    assert( true );
    assert( false != true );
    assert( true and true);
    assert( not true == false );
    assert( (false or true) and (false == false) );
    assert( true && true );
    // tipo de dato DOUBLE
    assert( 4.0 == 2.0 + 2.0 );
    assert( 25.0 > 20.0 );
    assert( 13.0 < 15.5 );
    assert( 40.0 >= 40.0 );
    assert( 3.0 != 3.02 );
    assert( 2.5 == 5.0 / 2);
    assert( 1.0 == 1 ); // el 1 para a double
    assert( 0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1); // comentario del profe en clase, sobre notación
    // tipo de dato CHAR
    assert( 'b' == 'b' );
    assert( 'b' != 'a' );
    assert( 'b' != 'B');
    assert( 'a' > 'A' );
    assert( 'A' == 65 ); // valor != representación
    assert( 'A' + 'B' == 131); 
    assert( 'B' == 'A' + 1); // ejemplo del profe
    // tipo de dato UNSIGNED
    assert( 7u != 8u );
    assert( 5u == 5u );
    assert( 20u < 22u );
    assert( 10u > 5u );
    assert( 8u + 2u == 5u * 2u );
    assert( 0u == 0u ); 
    // tipo de dato STRING
    assert( "reboredo"s == "rebo"s + "redo"s ); 
}