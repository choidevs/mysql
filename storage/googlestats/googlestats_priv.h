// Copyright 2011 Google Inc. All Rights Reserved.
// Author: seanrees@google.com (Sean Rees)

// Migrated from mysql_priv.h


// Export failed stats server connection attempts.
extern ulong google_connect_failures;
// Export failed stats server connection attempts reported to a user session.
extern ulong google_connect_not_possible;
// Export number of times read or write to or from a stats server fails.
extern ulong google_network_io_failures;
// Export the number of rows fetched from the stats server.
extern ulonglong google_fetch_rows;
// Export the number of bytes fetched from the stats server.
extern ulonglong google_fetch_bytes;
// Export the number of GoogleStats requests
extern ulong google_requests;
// Export the number of connections to a tierN stats server.
extern ulong google_connect_tier0;
extern ulong google_connect_tier1;
extern ulong google_connect_tier2;
extern ulong google_connect_tier3;
extern ulong google_connect_tier4;
extern ulong google_connect_tier5;
extern ulong google_connect_tier6;
extern ulong google_connect_tier7;
extern ulong google_connect_tier8;
extern ulong google_connect_tier9;

// Export the number of bytes fetched from a tierN stats server.
extern ulonglong google_fetch_bytes_tier0;
extern ulonglong google_fetch_bytes_tier1;
extern ulonglong google_fetch_bytes_tier2;
extern ulonglong google_fetch_bytes_tier3;
extern ulonglong google_fetch_bytes_tier4;
extern ulonglong google_fetch_bytes_tier5;
extern ulonglong google_fetch_bytes_tier6;
extern ulonglong google_fetch_bytes_tier7;
extern ulonglong google_fetch_bytes_tier8;
extern ulonglong google_fetch_bytes_tier9;

// Export the number of RPCs to a tierN stats server.
extern ulong google_fetch_tier0;
extern ulong google_fetch_tier1;
extern ulong google_fetch_tier2;
extern ulong google_fetch_tier3;
extern ulong google_fetch_tier4;
extern ulong google_fetch_tier5;
extern ulong google_fetch_tier6;
extern ulong google_fetch_tier7;
extern ulong google_fetch_tier8;
extern ulong google_fetch_tier9;

// Export the number of stats servers at tierN.
extern ulong google_statsservers_tier0;
extern ulong google_statsservers_tier1;
extern ulong google_statsservers_tier2;
extern ulong google_statsservers_tier3;
extern ulong google_statsservers_tier4;
extern ulong google_statsservers_tier5;
extern ulong google_statsservers_tier6;
extern ulong google_statsservers_tier7;
extern ulong google_statsservers_tier8;
extern ulong google_statsservers_tier9;
