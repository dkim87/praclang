def parrot_trouble(talking,hour):

    if(hour>=7 and hour<=20):
        daytime=True
    else:
        daytime=False

    return not daytime and talking

