// Fill out your copyright notice in the Description page of Project Settings.


#include "Service_NeedToAttackWeakToFalse.h"

#include "AIController.h"
#include "../Characters/Character_EnemyWeak.h"

void UService_NeedToAttackWeakToFalse::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	ACharacter_EnemyWeak* enemy = Cast<ACharacter_EnemyWeak>(OwnerComp.GetAIOwner()->GetPawn());
	
	enemy->needToAttackWeak = false;
}