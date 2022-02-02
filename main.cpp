#include <iostream>

struct seller {
  int price;
  int stock;
};

struct buyer {
  int money;
  void buy(seller *seller, int amount = 1) {
    if (amount > seller->stock) {
      amount = seller->stock;
    }
    if (money - seller->price * amount < 0) {
      amount = money / seller->price;
    }

    seller->stock -= amount;
    money -= seller->price * amount;
  }
};


int main() {
  using namespace std;

  seller bob;
  buyer alice;

  bob.price = 10;
  bob.stock = 10;
  alice.money = 50;
}
