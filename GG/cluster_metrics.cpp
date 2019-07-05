/*
 * Copyright 2019 GridGain Systems, Inc. and Contributors.
 *
 * Licensed under the GridGain Community Edition License (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.gridgain.com/products/software/community-edition/gridgain-community-edition-license
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "ignite/cluster/cluster_metrics.h"

using namespace ignite::common::concurrent;
using namespace ignite::impl::cluster;

namespace ignite
{
    namespace cluster
    {
        ClusterMetrics::ClusterMetrics(SharedPointer<ignite::impl::cluster::ClusterMetricsImpl> impl) :
            impl(impl)
        {
            // No-op.
        }

        float ClusterMetrics::GetAverageActiveJobs()
        {
            return impl.Get()->GetAverageActiveJobs();
        }

        float ClusterMetrics::GetAverageCancelledJobs()
        {
            return impl.Get()->GetAverageCancelledJobs();
        }

        double ClusterMetrics::GetAverageCpuLoad()
        {
            return impl.Get()->GetAverageCpuLoad();
        }

        double ClusterMetrics::GetAverageJobExecuteTime()
        {
            return impl.Get()->GetAverageJobExecuteTime();
        }

        double ClusterMetrics::GetAverageJobWaitTime()
        {
            return impl.Get()->GetAverageJobWaitTime();
        }

        float ClusterMetrics::GetAverageRejectedJobs()
        {
            return impl.Get()->GetAverageRejectedJobs();
        }

        float ClusterMetrics::GetAverageWaitingJobs()
        {
            return impl.Get()->GetAverageWaitingJobs();
        }

        float ClusterMetrics::GetBusyTimePercentage()
        {
            return impl.Get()->GetBusyTimePercentage();
        }

        int32_t ClusterMetrics::GetCurrentActiveJobs()
        {
            return impl.Get()->GetCurrentActiveJobs();
        }

        int32_t ClusterMetrics::GetCurrentCancelledJobs()
        {
            return impl.Get()->GetCurrentCancelledJobs();
        }

        double ClusterMetrics::GetCurrentCpuLoad()
        {
            return impl.Get()->GetCurrentCpuLoad();
        }

        int32_t ClusterMetrics::GetCurrentDaemonThreadCount()
        {
            return impl.Get()->GetCurrentDaemonThreadCount();
        }

        double ClusterMetrics::GetCurrentGcCpuLoad()
        {
            return impl.Get()->GetCurrentGcCpuLoad();
        }

        int64_t ClusterMetrics::GetCurrentIdleTime()
        {
            return impl.Get()->GetCurrentIdleTime();
        }

        int64_t ClusterMetrics::GetCurrentJobExecuteTime()
        {
            return impl.Get()->GetCurrentJobExecuteTime();
        }

        int64_t ClusterMetrics::GetCurrentJobWaitTime()
        {
            return impl.Get()->GetCurrentJobWaitTime();
        }

        int32_t ClusterMetrics::GetCurrentRejectedJobs()
        {
            return impl.Get()->GetCurrentRejectedJobs();
        }

        int32_t ClusterMetrics::GetCurrentThreadCount()
        {
            return impl.Get()->GetCurrentThreadCount();
        }

        int32_t ClusterMetrics::GetCurrentWaitingJobs()
        {
            return impl.Get()->GetCurrentWaitingJobs();
        }

        int64_t ClusterMetrics::GetHeapMemoryCommitted()
        {
            return impl.Get()->GetHeapMemoryCommitted();
        }

        int64_t ClusterMetrics::GetHeapMemoryInitialized()
        {
            return impl.Get()->GetHeapMemoryInitialized();
        }

        int64_t ClusterMetrics::GetHeapMemoryMaximum()
        {
            return impl.Get()->GetHeapMemoryMaximum();
        }

        int64_t ClusterMetrics::GetHeapMemoryTotal()
        {
            return impl.Get()->GetHeapMemoryTotal();
        }

        int64_t ClusterMetrics::GetHeapMemoryUsed()
        {
            return impl.Get()->GetHeapMemoryUsed();
        }

        float ClusterMetrics::GetIdleTimePercentage()
        {
            return impl.Get()->GetIdleTimePercentage();
        }

        int64_t ClusterMetrics::GetLastDataVersion()
        {
            return impl.Get()->GetLastDataVersion();
        }

        Timestamp ClusterMetrics::GetLastUpdateTime()
        {
            return impl.Get()->GetLastUpdateTime();
        }

        int32_t ClusterMetrics::GetMaximumActiveJobs()
        {
            return impl.Get()->GetMaximumActiveJobs();
        }

        int32_t ClusterMetrics::GetMaximumCancelledJobs()
        {
            return impl.Get()->GetMaximumCancelledJobs();
        }

        int64_t ClusterMetrics::GetMaximumJobExecuteTime()
        {
            return impl.Get()->GetMaximumJobExecuteTime();
        }

        int64_t ClusterMetrics::GetMaximumJobWaitTime()
        {
            return impl.Get()->GetMaximumJobWaitTime();
        }

        int32_t ClusterMetrics::GetMaximumRejectedJobs()
        {
            return impl.Get()->GetMaximumRejectedJobs();
        }

        int32_t ClusterMetrics::GetMaximumThreadCount()
        {
            return impl.Get()->GetMaximumThreadCount();
        }

        int32_t ClusterMetrics::GetMaximumWaitingJobs()
        {
            return impl.Get()->GetMaximumWaitingJobs();
        }

        Timestamp ClusterMetrics::GetNodeStartTime()
        {
            return impl.Get()->GetNodeStartTime();
        }

        int64_t ClusterMetrics::GetNonHeapMemoryCommitted()
        {
            return impl.Get()->GetNonHeapMemoryCommitted();
        }

        int64_t ClusterMetrics::GetNonHeapMemoryInitialized()
        {
            return impl.Get()->GetNonHeapMemoryInitialized();
        }

        int64_t ClusterMetrics::GetNonHeapMemoryMaximum()
        {
            return impl.Get()->GetNonHeapMemoryMaximum();
        }

        int64_t ClusterMetrics::GetNonHeapMemoryTotal()
        {
            return impl.Get()->GetNonHeapMemoryTotal();
        }

        int64_t ClusterMetrics::GetNonHeapMemoryUsed()
        {
            return impl.Get()->GetNonHeapMemoryUsed();
        }

        int32_t ClusterMetrics::GetOutboundMessagesQueueSize()
        {
            return impl.Get()->GetOutboundMessagesQueueSize();
        }

        int64_t ClusterMetrics::GetReceivedBytesCount()
        {
            return impl.Get()->GetReceivedBytesCount();
        }

        int32_t ClusterMetrics::GetReceivedMessagesCount()
        {
            return impl.Get()->GetReceivedMessagesCount();
        }

        int64_t ClusterMetrics::GetSentBytesCount()
        {
            return impl.Get()->GetSentBytesCount();
        }

        int32_t ClusterMetrics::GetSentMessagesCount()
        {
            return impl.Get()->GetSentMessagesCount();
        }

        Timestamp ClusterMetrics::GetStartTime()
        {
            return impl.Get()->GetStartTime();
        }

        int64_t ClusterMetrics::GetTotalBusyTime()
        {
            return impl.Get()->GetTotalBusyTime();
        }

        int32_t ClusterMetrics::GetTotalCancelledJobs()
        {
            return impl.Get()->GetTotalCancelledJobs();
        }

        int32_t ClusterMetrics::GetTotalCpus()
        {
            return impl.Get()->GetTotalCpus();
        }

        int32_t ClusterMetrics::GetTotalExecutedJobs()
        {
            return impl.Get()->GetTotalExecutedJobs();
        }

        int32_t ClusterMetrics::GetTotalExecutedTasks()
        {
            return impl.Get()->GetTotalExecutedTasks();
        }

        int64_t ClusterMetrics::GetTotalIdleTime()
        {
            return impl.Get()->GetTotalIdleTime();
        }

        int32_t ClusterMetrics::GetTotalNodes()
        {
            return impl.Get()->GetTotalNodes();
        }

        int64_t ClusterMetrics::GetTotalRejectedJobs()
        {
            return impl.Get()->GetTotalRejectedJobs();
        }

        int64_t ClusterMetrics::GetTotalStartedThreadCount()
        {
            return impl.Get()->GetTotalStartedThreadCount();
        }

        int64_t ClusterMetrics::GetUpTime()
        {
            return impl.Get()->GetUpTime();
        }
    }
}