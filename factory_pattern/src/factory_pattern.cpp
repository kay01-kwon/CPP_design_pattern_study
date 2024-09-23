#include <iostream>

using std::cout;
using std::endl;

class IGameObject{

    public:

        virtual ~IGameObject() = default;
        virtual void Update() = 0;
        virtual void Render() = 0;
};

class Plane : public IGameObject{

    public:

        Plane() {}
        void Update() override 
        {

        }

        void Render() override
        {

        }


};

class Boat : public IGameObject{

    public:

        Boat() {}
        void Update() override 
        {

        }

        void Render() override
        {

        }
};

int main()
{


    return 0;
}