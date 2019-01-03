import DAN

ServerIP='https://iot.iottalk.tw/' # non-Secure connection
#ServerIP='https://DomainName'  #Secure connection
Comm_interval = 0.2 # unit:second

def profile_init():
    DAN.profile['dm_name']='SwitchSet'
    DAN.profile['d_name']='CamCorner' #DAN.get_mac_addr()[-4:]

def odf():  # int only
    return [
	('Switch-O1', 0, 'Up'),
    ('Switch-O2', 0, 'Down'),
    ('Switch-O3', 0, 'Left'),
    ('Switch-O4', 0, 'Right'),
    ]

def idf():
    return [
       #('A0', int),
       #('A1', int),
       #('A2', int),
       #('A3', int),
       #('A4', int),
       #('A5', int),
    ]
