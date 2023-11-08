#pragma once

#include "Resource.hpp"


class ResourceManager
{

    public:
    ResourceManager() : resource(new Resource()){}
    ResourceManager(const ResourceManager& res_man_in){
        resource = new Resource();
        *this = res_man_in;
    }
    ~ResourceManager(){
        delete resource;
    }

    ResourceManager& operator=(const ResourceManager& res_man_in){
        if (this == &res_man_in){
            return *this;
        }

        delete resource;
        resource = new Resource();
        return *this = res_man_in;
    }

    double get(){
        resource->get();
    }

    private:
    Resource* resource; 
};
