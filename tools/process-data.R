
gym_hourly <- readr::read_csv(
  "../nupic/examples/opf/clients/hotgym/prediction/one_gym/rec-center-hourly.csv",
  skip = 3,
  col_names = c("timestamp", "consumption"),
  col_types = list(readr::col_datetime("%m/%d/%y %H:%M"), readr::col_double()))

save(gym_hourly, file = "data/gym_hourly.rda")

nyc_taxi <- readr::read_csv(
  "../nupic/src/nupic/datafiles/extra/nycTaxi/nycTaxi.csv",
  skip = 1,
  col_names = c("timestamp", "value"),
  col_types = list(readr::col_datetime("%Y-%m-%d %H:%M:%S"), readr::col_integer()))

save(nyc_taxi, file = "data/nyc_taxi.rda")
