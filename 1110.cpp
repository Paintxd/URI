#include <iostream>

class Fila {
private:
    int *m_fila;
    int m_inicio;
    int m_fim;
public:
    Fila() {
        m_fila= new int[50];
        m_inicio=1;
        m_fim=0;
    }

    void descarte(int p) {
        std::cout << "Discarded cards: " << p << ", ";
    }

    void queue(int fim) {
        for(int i=0;i<=fim;i++) {
            this->m_fila
        }
    }

    void dequeue() {

    }
};

int main () {
    Fila qq;
    int op;
    while(std::cin >> op && op!=0) {
        qq.queue(op);
    }
}
