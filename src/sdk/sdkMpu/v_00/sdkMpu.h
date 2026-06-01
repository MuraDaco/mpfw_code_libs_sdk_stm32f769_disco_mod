//  *******************************************************************************
//  
//  mpfw / fw2 - Multi Platform FirmWare FrameWork 
//      library that contains the wrapper code to manage platform resources
//  Copyright (C) (2023) Marco Dau
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero General Public License as published
//  by the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Affero General Public License for more details.
//  
//  You should have received a copy of the GNU Affero General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//  
//  You can contact me by the following email address
//  marco <d o t> ing <d o t> dau <a t> gmail <d o t> com
//  
//  *******************************************************************************
/*
 * sdkMpu.h
 *
 *  Created on: June, 16 2024
 *      Author: Marco Dau
 */

#ifndef SDK_MPU_H_
#define SDK_MPU_H_


// system lib

// mpfw/sdk lib
#include <stm32f7xx_hal.h>

// mpfw/fw2 lib
#include <krInit.h>


namespace libs { namespace sdk { namespace stm32f769_disco	{

class sdkMpu {

public:

	// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
	// ---------------------------------------------------------------  SERVICE: INIT  ------------------------
	// -------------------------------------------------- #include "../kr/krInit.h"

	// ************************************************************** METHODS
	static void Init (void);

	// ********************************************************* UNIT SERVICE
	static krInit g_Init;

private:

    static void SystemClock_Config  (void);
    static void MPU_Config  (void);
    static void CPU_CACHE_Enable    (void);

};

} } }   // libs::sdk::stm32f769_disco


#endif /* SDK_MPU_H_ */
