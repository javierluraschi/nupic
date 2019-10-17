
gym_hourly <- readr::read_csv(
  "../nupic/examples/opf/clients/hotgym/prediction/one_gym/rec-center-hourly.csv",
  skip = 3,
  col_names = c("timestamp", "kw_energy_consumption"),
  col_types = list(readr::col_datetime("%m/%d/%y %H:%M"), readr::col_double()))

save(gym_hourly, file = "data/gym_hourly.rda")
