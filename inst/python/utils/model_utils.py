import datetime

def run(model, record, conversions):
  for conversion in conversions:
    if (conversions[conversion] == "datetime"):
      record[conversion] = datetime.datetime.strptime(record[conversion], "%m/%d/%y %H:%M")
      
  model.run(record)
