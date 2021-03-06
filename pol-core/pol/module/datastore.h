/*
History
=======


Notes
=======

*/

#ifndef DATASTORE_H
#define DATASTORE_H

#include "../../bscript/execmodl.h"
namespace Pol {
  namespace Module {
	class DataStoreFile;

	class DataFileExecutorModule : public Bscript::TmplExecutorModule<DataFileExecutorModule>
	{
	public:
	  DataFileExecutorModule( Bscript::Executor& exec ) :
		Bscript::TmplExecutorModule<DataFileExecutorModule>( "datafile", exec ) {}

	  Bscript::BObjectImp* mf_ListDataFiles();
	  Bscript::BObjectImp* mf_CreateDataFile();
	  Bscript::BObjectImp* mf_OpenDataFile();
	  Bscript::BObjectImp* mf_UnloadDataFile();

	private:
	  DataStoreFile* GetDataStoreFile( const std::string& inspec );
	};
  }
}

#endif
