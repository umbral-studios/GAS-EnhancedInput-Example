# Summary

Hello! Here's an example project that uses Unreal Engine's Gameplay Ability System as well as the Enhanced Input System. Here's how it was created:

First, I created a C++ class called `UEnhancedInputAbilitySystem ` that extended the `UAbilitySystemComponent` and added functions to set and clear input bindings. It can be found [here](https://github.com/leonard-parisi-yt-channel/GAS-EnhancedInput-Example/blob/main/Source/Demo/Public/Components/EnhancedInputAbilitySystem.h).

Then, I created an example input action, input mapping context, and gameplay ability through the editor (found in the `Content/TutorialCode` folder). 

Finally, I gave the new `UEnhancedInputAbilitySystem` component to the `BP_FirstPersonCharacter`, added the mapping context, gave the player the ability, and set the input binding.

That was it!
