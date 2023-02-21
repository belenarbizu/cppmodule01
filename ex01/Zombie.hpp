#ifndef ZOMBIE_H
#define ZOMBIE_H

class   Zombie {
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();

    void    announce(void);
};

#endif