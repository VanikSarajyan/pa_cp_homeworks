from sun import Sun
from air import Air
from tree import Tree
from frog import Frog
from grass import Grass
import time

mysun = Sun()
myair = Air()
mytree = Tree()
myfrog = Frog()
mygrass = Grass()

def print_status():
    mysun.print_status()
    myair.print_status()
    mygrass.print_status()
    myfrog.print_status()


while True:
    print_status()

    mysun.update_status()
    myfrog.sleep_update(mysun)

    mytree.produce_air(myair, mysun)
    mygrass.grow(mysun)

    myfrog.move()
    myfrog.eat(mygrass)


    time.sleep(1)
