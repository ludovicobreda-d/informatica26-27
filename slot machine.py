import time
import random

symbols = ["7", "WIN", "stella⭐", "ciliegie🍒", "angurie🍉"]

def slot_machine():
    result = []

    print("Girando la slot...\n")
    time.sleep(1)

    for _ in range(3):
        chosen = random.choice(symbols)
        result.append(chosen)
        print(chosen)
        time.sleep(2)

    if result.count(result[0]) == 3 and result[0] in ["7", "WIN"]:
        print("Hai vinto!")
    else:
        loss = random.randint(1, 10)
        print(f"Hai perso! Soldi persi in questo giro: {loss}€")

if __name__ == "__main__":
    slot_machine()
    
  