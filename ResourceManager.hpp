#pragma once

#include "Resource.hpp"


class ResourceManager
{

    public:
    ResourceManager() : resource(new Resource()){}
    ResourceManager(const ResourceManager& res_man_in) : resource(new Resource(*res_man_in.resource)){}
    ~ResourceManager(){
        delete resource;
    }

    double get(){
        resource->get();
    }

    private:
    Resource* resource; 
};
