#include <stdio.h>

int main() {
	int device_type, symptom_code;
	
	printf("Tech Support Diagnostic System\n");
	printf("\nEnter your device type:\n1 for Laptop\n2 for Smartphone\n3 for Router\n");
	scanf("%d", &device_type);
	
	
	if(device_type>0 && device_type<3){
		switch(device_type){
		case 1:
			printf("\nEnter Symptom Code: \n10 for Won't turn on\n11 for Overheating\n12 for Slow performance\n");
			scanf("%d", &symptom_code);
			
			switch(symptom_code){
				case 10: printf("\nWon't turn on\nAdditional advice: Check power adapter and battery connections. Try a different power outlet. Remove battery and hold power button for 30 seconds.\n");
				break;
				case 11: printf("\nOverheating\nAdditional advice: Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.\n");
				break;
				case 12: printf("\nSlow performance\nAdditional advice: Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.\n");
				break;
			}
		break;
		
		case 2:
			printf("\nEnter Symptom Code: \n20 for Battery drains fast\n21 for No signal\n22 for Touchscreen unresponsive\n");
			scanf("%d", &symptom_code);
			
			switch(symptom_code){
				case 20: printf("\nBattery drains fast\nAdditional advice: Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.\n");
				break;
				case 21: printf("\nNo signal\nAdditional advice: Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.\n");
				break;
				case 22: printf("\nTouchscreen unresponsive\nAdditional advice: Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.\n");
				break;
			}
		break;
		
		case 3:
			printf("\nEnter Symptom Code: \n30 for No Internet Connection\n31 for No Internet Connection\n32 for No Internet Connection\n");
			scanf("%d", &symptom_code);
			
			switch(symptom_code){
				case 30: printf("\nNo Internet Connection\nAdditional advice: Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.\n");
				break;
				case 31: printf("\nNo Internet Connection\nAdditional advice: Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.\n");
				break;
				case 32: printf("\nNo Internet Connection\nAdditional advice: heck MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.\n");
				break;
				
		break;
	}
}
} else {
		printf("Invalid code");
}
return 0;
}
