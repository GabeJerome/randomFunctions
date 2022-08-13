#include "toBinary.h"



void txtToBinary( string fileName )
{
    ifstream fin;
    ofstream fout;

    if ( fileName.substr( fileName.size( ) - 4, 4 ) != ".txt" )
    {
        cout << "Please enter a .txt file" << endl;
        return;
    }

    fin.open( fileName );
    if ( !fin.is_open( ) )
    {
        cout << "Could not open file: " << fileName << "." << endl;
        return;
    }


}


int main( )
{
    txtToBinary( "names.txt" );
}