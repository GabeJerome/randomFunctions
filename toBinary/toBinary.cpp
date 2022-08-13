#include "toBinary.h"



void txtToBinary( string fileName )
{
    ifstream fin;
    ofstream fout;
    string binFileName;
    char name[20];

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

    binFileName = fileName.substr( 0, fileName.find( '.' ) ) + ".bin";

    fout.open( binFileName, ios::binary | ios::trunc | ios::out );
    if ( !fout.is_open( ) )
    {
        cout << "Could not open file: " << binFileName << "." << endl;
        return;
    }

    //not reading here
    while ( fin >> name )
    {
        fout.write( (char *)&name, sizeof( name ) );
    }

    fin.close( );
    fout.close( );
}


int main( )
{
    txtToBinary( "names.txt" );
}