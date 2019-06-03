#ifndef CHARACTER_H
#define CHARACTER_H


class Character
{
    public:
        Character();
        virtual ~Character();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // CHARACTER_H
