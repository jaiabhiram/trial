#include "user.hpp"
#include "tripMgr.hpp"
class TravelerCompanion : public User
{
    TripManager* tripManager;
    vector<string> sharedRides;
    public:
    TravelerCompanion(string Name, string phoneNumber) : User
};