// Copyright Laohu

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
public:
	AAuraEnemy();

private:
	GENERATED_BODY()

public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
};
