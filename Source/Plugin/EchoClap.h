// EchoClap.h
// The three entry functions clap-wrapper links into every format.

#pragma once

bool tbce_entry_init (const char* pluginPath);
void tbce_entry_deinit();
const void* tbce_entry_get_factory (const char* factoryId);
