#include "toBinary.h"



void namesToBinary( string fileName )
{
    ifstream fin;
    ofstream fout;
    string binFileName;
    char name[16];
    string sName;

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
    while ( fin >> sName )
    {
        if(sName.size() < 16 )
            fout.write( (char *)&sName, sizeof( name ) );
    }

    fin.close( );
    fout.close( );
}


int main( )
{
    namesToBinary( "names.txt" );
}