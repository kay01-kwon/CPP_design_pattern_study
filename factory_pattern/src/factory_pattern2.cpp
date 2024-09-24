#include <iostream>
#include <memory>

using std::cout;
using std::endl;

using std::unique_ptr;
using std::make_unique;

enum class GameObjectType
{
    Plane,
    Boat
};

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

class GameObjectFactory{

    public:

        static unique_ptr<IGameObject> CreateGameObject(GameObjectType type)
        {
            switch(type)
            {
                case GameObjectType::Plane:
                    s_planeCount++;
                    return make_unique<Plane>();
                case GameObjectType::Boat:
                    s_boatCount++;
                    return make_unique<Boat>();
                default:
                    return nullptr;
            }
        }

    static void printCounts()
    {
        cout << "Plane count: " << s_planeCount << endl;
        cout << "Boat count: " << s_boatCount << endl;
    }

    private:

        GameObjectFactory() = default;
        ~GameObjectFactory() = default;
        GameObjectFactory(const GameObjectFactory& other) = delete;
        GameObjectFactory& operator=(const GameObjectFactory& other) = delete;

        static int s_planeCount;
        static int s_boatCount;
};

int GameObjectFactory::s_planeCount = 0;
int GameObjectFactory::s_boatCount = 0;

int main()
{

    unique_ptr<IGameObject> plane = GameObjectFactory::CreateGameObject(GameObjectType::Plane);
    auto boat = GameObjectFactory::CreateGameObject(GameObjectType::Boat);
    auto boat2 = GameObjectFactory::CreateGameObject(GameObjectType::Boat);

    GameObjectFactory::printCounts();


    return 0;
}