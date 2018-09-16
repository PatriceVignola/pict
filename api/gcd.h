#pragma once

#ifndef IN
#define IN
#endif

#ifndef OUT
#define OUT
#endif

#ifndef NOOP
#define NOOP
#endif

#include "gcdmodel.h"

namespace pict_gcd
{

class GcdRunner
{
public:
    GcdRunner( CModelData& modelData ) : _modelData( modelData ) {}

    ErrorCode Generate();

    CResult GetResult() { return( _result ); }

private:
    CModelData& _modelData;
    CResult     _result;

    ErrorCode generateResults( IN CModelData& modelData,
                               IN bool justNegative );
    
    void translateResults( IN CModelData& modelData,
                           IN ResultCollection& resultCollection,
                           IN bool justNegative );
};

}