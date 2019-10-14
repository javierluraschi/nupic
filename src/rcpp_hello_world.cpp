
#include <Rcpp.h>
using namespace Rcpp;

#include <nupic/engine/Input.hpp>
#include <nupic/engine/Link.hpp>
#include <nupic/engine/Network.hpp>
#include <nupic/engine/NuPIC.hpp>
#include <nupic/engine/Output.hpp>
#include <nupic/engine/Region.hpp>
#include <nupic/engine/Spec.hpp>
#include <nupic/ntypes/Array.hpp>
#include <nupic/ntypes/ArrayRef.hpp>
#include <nupic/ntypes/Dimensions.hpp>
#include <nupic/os/Env.hpp>
#include <nupic/os/OS.hpp> // memory leak detection
#include <nupic/os/Path.hpp>
#include <nupic/os/Timer.hpp>
#include <nupic/types/Exception.hpp>

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

// [[Rcpp::export]]
List rcpp_hello_world() {

    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}
