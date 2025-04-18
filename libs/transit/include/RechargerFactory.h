#ifndef RECHARGER_FACTORY_H_
#define RECHARGER_FACTORY_H_

#include <vector>
#include "IEntityFactory.h"
#include "Recharger.h"

/**
 * @class RechargeFactory 
 * 
 * @brief Recharger Factory to produce Recharger class.
 **/
class RechargerFactory : public IEntityFactory {
 public:
  /**
   * @brief Destructor for RechargerFactory class.
   **/
  virtual ~RechargerFactory() {}

  /**
   * @brief Creates entity using the given JSON object, if possible.
   * 
   * @param entity - JsonObject to be used to create the new entity.
   * 
   * @return Entity that was created if it was created successfully, or a
     nullpointer if creation failed.
   **/
  IEntity* CreateEntity(JsonObject& entity);
};

#endif //RECHARGER_FACTORY_H_

