#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager(){
        resource = new Resource();
    }
    ResourceManager(const ResourceManager& rm){
        resource = new Resource();
        *this = rm;
    }
    ResourceManager(const ResourceManager&& rm){
        resource = new Resource();
        *this = std::move(rm);
    }
    ~ResourceManager(){
        delete resource;
    }

    ResourceManager& operator=(const ResourceManager& rm){
        if(&rm != this){
            this->resource->tab = rm.resource->tab;
        }
        return *this;
    }

    double get(){
        return resource -> get();
    }

    private:
    Resource* resource = nullptr;
   
};