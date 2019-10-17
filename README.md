nupic: Platform for Intelligent Computing
================

This R packages provides an interface to the Numenta Platform for
Intelligent Computing **(NuPIC)**, a machine intelligence platform that
implements the [HTM learning
algorithms](https://numenta.com/resources/papers-videos-and-more/). HTM
is a detailed computational theory of the neocortex. At the core of HTM
are time-based continuous learning algorithms that store and recall
spatial and temporal patterns. NuPIC is suited to a variety of problems,
particularly anomaly detection and prediction of streaming data sources.
For more information, see [numenta.org](http://numenta.org/), the [NuPIC
Forum](https://discourse.numenta.org/c/nupic) and
[documentation](http://nupic.docs.numenta.org/).

## Installation

First, install the latest GitHub version:

``` r
remotes::install_github("javierluraschi/nupic")
```

Followed by installing the Nupic runtime:

``` r
nupic::nupic_install()
```

**Note**: Nupic requires Python to be installed in your system.

## Usage

``` r
library(nupic)

nupic(
  gym_hourly[1:10,],
  predict = "consumption",
  encoders = nupic_config_en(
    encoder_random_distributed_scalar("consumption", resolution = 0.88, seed = 1),
    encoder_date("timestamp", "time_of_day", time_of_day = list(21L, 1L)),
    encoder_date("timestamp", "weekend", weekend = 21L)
  )
)
#> # A tibble: 10 x 3
#>    timestamp      consumption prediction
#>    <chr>                <dbl>      <dbl>
#>  1 07/02/10 00:00        21.2        0  
#>  2 07/02/10 01:00        16.4       21.2
#>  3 07/02/10 02:00         4.7       16.4
#>  4 07/02/10 03:00         4.7        4.7
#>  5 07/02/10 04:00         4.6        4.7
#>  6 07/02/10 05:00        23.5        4.6
#>  7 07/02/10 06:00        47.5       23.5
#>  8 07/02/10 07:00        45.4       47.5
#>  9 07/02/10 08:00        46.1       45.4
#> 10 07/02/10 09:00        41.5       46.1
```
