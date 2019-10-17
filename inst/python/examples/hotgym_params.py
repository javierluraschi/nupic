# Numenta Platform for Intelligent Computing (NuPIC)
# Copyright (C) 2013, Numenta, Inc.  Unless you have an agreement
# with Numenta, Inc., for a separate license for this software code, the
# following terms and conditions apply:
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Affero Public License version 3 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Affero Public License for more details.
#
# You should have received a copy of the GNU Affero Public License
# along with this program.  If not, see http://www.gnu.org/licenses.
#
# http://numenta.org/licenses/
# ----------------------------------------------------------------------

HOTGYM_PARAMS = {
    'modelParams': {
        'sensorParams': {
            # Sensor diagnostic output verbosity control;
            # if > 0: sensor region will print out on screen what it's sensing
            # at each step 0: silent; >=1: some info; >=2: more info;
            # >=3: even more info (see compute() in py/regions/RecordSensor.py)
            'verbosity' : 0,

            # Include the encoders we use
            'encoders': {
                u'consumption':    {
                    'fieldname': u'consumption',
                    'resolution': 0.88,
                    'seed': 1,
                    'name': u'consumption',
                    'type': 'RandomDistributedScalarEncoder',
                    },

                'timestamp_timeOfDay': {   'fieldname': u'timestamp',
                                           'name': u'timestamp_timeOfDay',
                                           'timeOfDay': (21, 1),
                                           'type': 'DateEncoder'},
                'timestamp_weekend': {   'fieldname': u'timestamp',
                                         'name': u'timestamp_weekend',
                                         'type': 'DateEncoder',
                                         'weekend': 21}
            },

            # A dictionary specifying the period for automatically-generated
            # resets from a RecordSensor;
            #
            # None = disable automatically-generated resets (also disabled if
            # all of the specified values evaluate to 0).
            # Valid keys is the desired combination of the following:
            #   days, hours, minutes, seconds, milliseconds, microseconds, weeks
            #
            # Example for 1.5 days: sensorAutoReset = dict(days=1,hours=12),
            #
            # (value generated from SENSOR_AUTO_RESET)
            'sensorAutoReset': None,
        }
    },
}
