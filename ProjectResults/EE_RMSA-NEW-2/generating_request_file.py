# Generating 100 such sample request:  [1,[2,3,4],40X] in requests.txt file

import random
# f = open("request.txt","w",encoding='utf-8')

def requestGen(node,number_of_req):
    
    list_of_nodes = set(range(1, node))

    with open("./REQUESTS/networknodes24/300_HSD_24.txt", "w", encoding='utf-8') as f:

        for _ in range(number_of_req):
            # Generate a list of 5 random integers between 1 and 24 (inclusive)
            source = random.randint(1, node)
            destination = random.sample(list_of_nodes - {source}, 5)
            bwd = random.randint(1, 4)*40
            f.write(str([source, destination, bwd]) + '\n')


requestGen(24,50)