/*
 * Copyright 2019 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Firestore/core/src/firebase/firestore/api/collection_reference.h"
#include "Firestore/core/src/firebase/firestore/api/document_change.h"
#include "Firestore/core/src/firebase/firestore/api/document_reference.h"
#include "Firestore/core/src/firebase/firestore/api/document_snapshot.h"
#include "Firestore/core/src/firebase/firestore/api/firestore.h"
#include "Firestore/core/src/firebase/firestore/api/listener_registration.h"
#include "Firestore/core/src/firebase/firestore/api/query_snapshot.h"
#include "Firestore/core/src/firebase/firestore/api/settings.h"
#include "Firestore/core/src/firebase/firestore/api/snapshot_metadata.h"
#include "Firestore/core/src/firebase/firestore/api/source.h"
#include "Firestore/core/src/firebase/firestore/api/write_batch.h"
#include "Firestore/core/src/firebase/firestore/core/query_listener.h"
#include "Firestore/core/src/firebase/firestore/core/transaction.h"
#include "Firestore/core/src/firebase/firestore/core/view_snapshot.h"
#include "Firestore/core/src/firebase/firestore/model/document_key.h"
#include "Firestore/core/src/firebase/firestore/model/document_set.h"
#include "gtest/gtest.h"

namespace firebase {
namespace firestore {
namespace api {

TEST(CompilationTest, Compiles) {
  EXPECT_EQ(true, true);
}

}  // namespace api
}  // namespace firestore
}  // namespace firebase
