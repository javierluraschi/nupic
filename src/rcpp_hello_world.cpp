
#include <Rcpp.h>
using namespace Rcpp;

#include <nupic/types/Exception.hpp>
#include <nupic/types/Fraction.hpp>
#include <nupic/types/BasicType.hpp>
#include <nupic/types/Types.hpp>

// [[Rcpp::export]]
List rcpp_hello_world() {

    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}
