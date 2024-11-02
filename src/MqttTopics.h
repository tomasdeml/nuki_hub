#pragma once

#define mqtt_topic_lock_action "/action"
#define mqtt_topic_lock_status_updated "/statusUpdated"
#define mqtt_topic_lock_state "/state"
#define mqtt_topic_lock_ha_state "/hastate"
#define mqtt_topic_lock_json "/json"
#define mqtt_topic_lock_binary_state "/binaryState"
#define mqtt_topic_lock_continuous_mode "/continuousMode"
#define mqtt_topic_lock_ring "/ring"
#define mqtt_topic_lock_binary_ring "/binaryRing"
#define mqtt_topic_lock_trigger "/trigger"
#define mqtt_topic_lock_last_lock_action "/lastLockAction"
#define mqtt_topic_lock_log "/log"
#define mqtt_topic_lock_log_latest "/shortLog"
#define mqtt_topic_lock_log_rolling "/rollingLog"
#define mqtt_topic_lock_log_rolling_last "/lastRollingLog"
#define mqtt_topic_lock_auth_id "/authorizationId"
#define mqtt_topic_lock_auth_name "/authorizationName"
#define mqtt_topic_lock_completionStatus "/completionStatus"
#define mqtt_topic_lock_action_command_result "/commandResult"
#define mqtt_topic_lock_door_sensor_state "/doorSensorState"
#define mqtt_topic_lock_rssi "/rssi"
#define mqtt_topic_lock_address "/address"
#define mqtt_topic_lock_retry "/retry"

#define mqtt_topic_official_lock_action "/lockAction"
//#define mqtt_topic_official_mode "/mode"
#define mqtt_topic_official_state "/state"
#define mqtt_topic_official_batteryCritical "/batteryCritical"
#define mqtt_topic_official_batteryChargeState "/batteryChargeState"
#define mqtt_topic_official_batteryCharging "/batteryCharging"
#define mqtt_topic_official_keypadBatteryCritical "/keypadBatteryCritical"
#define mqtt_topic_official_doorsensorState "/doorsensorState"
#define mqtt_topic_official_doorsensorBatteryCritical "/doorsensorBatteryCritical"
#define mqtt_topic_official_connected "/connected"
#define mqtt_topic_official_commandResponse "/commandResponse"
#define mqtt_topic_official_lockActionEvent "/lockActionEvent"

#define mqtt_topic_config_action "/configuration/action"
#define mqtt_topic_config_action_command_result "/configuration/commandResult"
#define mqtt_topic_config_basic_json "/configuration/basicJson"
#define mqtt_topic_config_advanced_json "/configuration/advancedJson"
#define mqtt_topic_config_button_enabled "/configuration/buttonEnabled"
#define mqtt_topic_config_led_enabled "/configuration/ledEnabled"
#define mqtt_topic_config_led_brightness "/configuration/ledBrightness"
#define mqtt_topic_config_auto_unlock "/configuration/autoUnlock"
#define mqtt_topic_config_auto_lock "/configuration/autoLock"
#define mqtt_topic_config_single_lock "/configuration/singleLock"
#define mqtt_topic_config_sound_level "/configuration/soundLevel"

#define mqtt_topic_query_config "/query/config"
#define mqtt_topic_query_lockstate "/query/lockstate"
#define mqtt_topic_query_keypad "/query/keypad"
#define mqtt_topic_query_battery "/query/battery"
#define mqtt_topic_query_lockstate_command_result "/query/lockstateCommandResult"

#define mqtt_topic_battery_level "/battery/level"
#define mqtt_topic_battery_critical "/battery/critical"
#define mqtt_topic_battery_charging "/battery/charging"
#define mqtt_topic_battery_voltage "/battery/voltage"
#define mqtt_topic_battery_drain "/battery/drain"
#define mqtt_topic_battery_max_turn_current "/battery/maxTurnCurrent"
#define mqtt_topic_battery_lock_distance "/battery/lockDistance"
#define mqtt_topic_battery_keypad_critical "/battery/keypadCritical"
#define mqtt_topic_battery_doorsensor_critical "/battery/doorSensorCritical"
#define mqtt_topic_battery_basic_json "/battery/basicJson"
#define mqtt_topic_battery_advanced_json "/battery/advancedJson"

#define mqtt_topic_keypad "/keypad"
#define mqtt_topic_keypad_codes "/keypad/codes"
#define mqtt_topic_keypad_command_action "/keypad/command/action"
#define mqtt_topic_keypad_command_id "/keypad/command/id"
#define mqtt_topic_keypad_command_name "/keypad/command/name"
#define mqtt_topic_keypad_command_code "/keypad/command/code"
#define mqtt_topic_keypad_command_enabled "/keypad/command/enabled"
#define mqtt_topic_keypad_command_result "/keypad/command/commandResult"
#define mqtt_topic_keypad_json "/keypad/json"
#define mqtt_topic_keypad_json_action "/keypad/actionJson"
#define mqtt_topic_keypad_json_command_result "/keypad/commandResultJson"

#define mqtt_topic_timecontrol "/timecontrol"
#define mqtt_topic_timecontrol_entries "/timecontrol/entries"
#define mqtt_topic_timecontrol_json "/timecontrol/json"
#define mqtt_topic_timecontrol_action "/timecontrol/action"
#define mqtt_topic_timecontrol_command_result "/timecontrol/commandResult"

#define mqtt_topic_auth "/authorization"
#define mqtt_topic_auth_entries "/authorization/entries"
#define mqtt_topic_auth_json "/authorization/json"
#define mqtt_topic_auth_action "/authorization/action"
#define mqtt_topic_auth_command_result "/authorization/commandResult"

#define mqtt_topic_info_hardware_version "/info/hardwareVersion"
#define mqtt_topic_info_firmware_version "/info/firmwareVersion"
#define mqtt_topic_info_nuki_hub_version "/info/nukiHubVersion"
#define mqtt_topic_info_nuki_hub_build "/info/nukiHubBuild"
#define mqtt_topic_info_nuki_hub_latest "/info/nukiHubLatest"
#define mqtt_topic_info_nuki_hub_ip "/info/nukiHubIp"

#define mqtt_topic_reset "/maintenance/reset"
#define mqtt_topic_update "/maintenance/update"
#define mqtt_topic_webserver_state "/maintenance/webserver/state"
#define mqtt_topic_webserver_action "/maintenance/webserver/enable"
#define mqtt_topic_uptime "/maintenance/uptime"
#define mqtt_topic_wifi_rssi "/maintenance/wifiRssi"
#define mqtt_topic_log "/maintenance/log"
#define mqtt_topic_freeheap "/maintenance/freeHeap"
#define mqtt_topic_restart_reason_fw "/maintenance/restartReasonNukiHub"
#define mqtt_topic_restart_reason_esp "/maintenance/restartReasonNukiEsp"
#define mqtt_topic_mqtt_connection_state "/maintenance/mqttConnectionState"
#define mqtt_topic_network_device "/maintenance/networkDevice"
#define mqtt_hybrid_state "/hybridConnected"

#define mqtt_topic_gpio_prefix "/gpio"
#define mqtt_topic_gpio_pin "/pin_"
#define mqtt_topic_gpio_role "/role"
#define mqtt_topic_gpio_state "/state"
