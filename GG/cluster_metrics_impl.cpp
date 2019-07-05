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

#include <ignite/impl/cluster/cluster_metrics_impl.h>

namespace ignite
{
    namespace impl
    {
        namespace cluster
        {
            ClusterMetricsImpl::ClusterMetricsImpl(binary::BinaryReaderImpl& reader)
            {
                lastUpdateTimeRaw = reader.ReadInt64();
                lastUpdateTime = reader.ReadTimestamp();

                maximumActiveJobs = reader.ReadInt32();
                currentActiveJobs = reader.ReadInt32();
                averageActiveJobs = reader.ReadFloat();
                maximumWaitingJobs = reader.ReadInt32();

                currentWaitingJobs = reader.ReadInt32();
                averageWaitingJobs = reader.ReadFloat();
                maximumRejectedJobs = reader.ReadInt32();
                currentRejectedJobs = reader.ReadInt32();
                averageRejectedJobs = reader.ReadFloat();

                totalRejectedJobs = reader.ReadInt32();
                maximumCancelledJobs = reader.ReadInt32();
                currentCancelledJobs = reader.ReadInt32();
                averageCancelledJobs = reader.ReadFloat();
                totalCancelledJobs = reader.ReadInt32();

                totalExecutedJobs = reader.ReadInt32();
                maximumJobWaitTime = reader.ReadInt64();
                currentJobWaitTime = reader.ReadInt64();
                averageJobWaitTime = reader.ReadDouble();
                maximumJobExecuteTime = reader.ReadInt64();

                currentJobExecuteTime = reader.ReadInt64();
                averageJobExecuteTime = reader.ReadDouble();
                totalExecutedTasks = reader.ReadInt32();
                totalIdleTime = reader.ReadInt64();
                currentIdleTime = reader.ReadInt64();

                totalCpus = reader.ReadInt32();
                currentCpuLoad = reader.ReadDouble();
                averageCpuLoad = reader.ReadDouble();
                currentGcCpuLoad = reader.ReadDouble();
                heapMemoryInitialized = reader.ReadInt64();

                heapMemoryUsed = reader.ReadInt64();
                heapMemoryCommitted = reader.ReadInt64();
                heapMemoryMaximum = reader.ReadInt64();
                heapMemoryTotal = reader.ReadInt64();
                nonHeapMemoryInitialized = reader.ReadInt64();

                nonHeapMemoryUsed = reader.ReadInt64();
                nonHeapMemoryCommitted = reader.ReadInt64();
                nonHeapMemoryMaximum = reader.ReadInt64();
                nonHeapMemoryTotal = reader.ReadInt64();
                uptime = reader.ReadInt64();

                startTime = reader.ReadTimestamp();
                nodeStartTime = reader.ReadTimestamp();

                currentThreadCount = reader.ReadInt32();
                maximumThreadCount = reader.ReadInt32();
                totalStartedThreadCount = reader.ReadInt64();
                currentDaemonThreadCount = reader.ReadInt32();
                lastDataVersion = reader.ReadInt64();

                sentMessagesCount = reader.ReadInt32();
                sentBytesCount = reader.ReadInt64();
                receivedMessagesCount = reader.ReadInt32();
                receivedBytesCount = reader.ReadInt64();
                outboundMessagesQueueSize = reader.ReadInt32();

                totalNodes = reader.ReadInt32();
            }

            float ClusterMetricsImpl::GetAverageActiveJobs()
            {
                return averageActiveJobs;
            }

            float ClusterMetricsImpl::GetAverageCancelledJobs()
            {
                return averageCancelledJobs;
            }

            double ClusterMetricsImpl::GetAverageCpuLoad()
            {
                return averageCpuLoad;
            }

            double ClusterMetricsImpl::GetAverageJobExecuteTime()
            {
                return averageJobExecuteTime;
            }

            double ClusterMetricsImpl::GetAverageJobWaitTime()
            {
                return averageJobWaitTime;
            }

            float ClusterMetricsImpl::GetAverageRejectedJobs()
            {
                return averageRejectedJobs;
            }

            float ClusterMetricsImpl::GetAverageWaitingJobs()
            {
                return averageWaitingJobs;
            }

            float ClusterMetricsImpl::GetBusyTimePercentage()
            {
                return 1.0f - GetIdleTimePercentage();
            }

            int32_t ClusterMetricsImpl::GetCurrentActiveJobs()
            {
                return currentActiveJobs;
            }

            int32_t ClusterMetricsImpl::GetCurrentCancelledJobs()
            {
                return currentCancelledJobs;
            }

            double ClusterMetricsImpl::GetCurrentCpuLoad()
            {
                return currentCpuLoad;
            }

            int32_t ClusterMetricsImpl::GetCurrentDaemonThreadCount()
            {
                return currentDaemonThreadCount;
            }

            double ClusterMetricsImpl::GetCurrentGcCpuLoad()
            {
                return currentGcCpuLoad;
            }

            int64_t ClusterMetricsImpl::GetCurrentIdleTime()
            {
                return currentIdleTime;
            }

            int64_t ClusterMetricsImpl::GetCurrentJobExecuteTime()
            {
                return currentJobExecuteTime;
            }

            int64_t ClusterMetricsImpl::GetCurrentJobWaitTime()
            {
                return currentJobWaitTime;
            }

            int32_t ClusterMetricsImpl::GetCurrentRejectedJobs()
            {
                return currentRejectedJobs;
            }

            int32_t ClusterMetricsImpl::GetCurrentThreadCount()
            {
                return currentThreadCount;
            }

            int32_t ClusterMetricsImpl::GetCurrentWaitingJobs()
            {
                return currentWaitingJobs;
            }

            int64_t ClusterMetricsImpl::GetHeapMemoryCommitted()
            {
                return heapMemoryCommitted;
            }

            int64_t ClusterMetricsImpl::GetHeapMemoryInitialized()
            {
                return heapMemoryInitialized;
            }

            int64_t ClusterMetricsImpl::GetHeapMemoryMaximum()
            {
                return heapMemoryMaximum;
            }

            int64_t ClusterMetricsImpl::GetHeapMemoryTotal()
            {
                return heapMemoryTotal;
            }

            int64_t ClusterMetricsImpl::GetHeapMemoryUsed()
            {
                return heapMemoryUsed;
            }

            float ClusterMetricsImpl::GetIdleTimePercentage()
            {
                return totalIdleTime / (float)uptime;
            }

            int64_t ClusterMetricsImpl::GetLastDataVersion()
            {
                return lastDataVersion;
            }

            Timestamp ClusterMetricsImpl::GetLastUpdateTime()
            {
                return lastUpdateTime;
            }

            int32_t ClusterMetricsImpl::GetMaximumActiveJobs()
            {
                return maximumActiveJobs;
            }

            int32_t ClusterMetricsImpl::GetMaximumCancelledJobs()
            {
                return maximumCancelledJobs;
            }

            int64_t ClusterMetricsImpl::GetMaximumJobExecuteTime()
            {
                return maximumJobExecuteTime;
            }

            int64_t ClusterMetricsImpl::GetMaximumJobWaitTime()
            {
                return maximumJobWaitTime;
            }

            int32_t ClusterMetricsImpl::GetMaximumRejectedJobs()
            {
                return maximumRejectedJobs;
            }

            int32_t ClusterMetricsImpl::GetMaximumThreadCount()
            {
                return maximumThreadCount;
            }

            int32_t ClusterMetricsImpl::GetMaximumWaitingJobs()
            {
                return maximumWaitingJobs;
            }

            Timestamp ClusterMetricsImpl::GetNodeStartTime()
            {
                return nodeStartTime;
            }

            int64_t ClusterMetricsImpl::GetNonHeapMemoryCommitted()
            {
                return nonHeapMemoryCommitted;
            }

            int64_t ClusterMetricsImpl::GetNonHeapMemoryInitialized()
            {
                return nonHeapMemoryInitialized;
            }

            int64_t ClusterMetricsImpl::GetNonHeapMemoryMaximum()
            {
                return nonHeapMemoryMaximum;
            }

            int64_t ClusterMetricsImpl::GetNonHeapMemoryTotal()
            {
                return nonHeapMemoryTotal;
            }

            int64_t ClusterMetricsImpl::GetNonHeapMemoryUsed()
            {
                return nonHeapMemoryUsed;
            }

            int32_t ClusterMetricsImpl::GetOutboundMessagesQueueSize()
            {
                return outboundMessagesQueueSize;
            }

            int64_t ClusterMetricsImpl::GetReceivedBytesCount()
            {
                return receivedBytesCount;
            }

            int32_t ClusterMetricsImpl::GetReceivedMessagesCount()
            {
                return receivedMessagesCount;
            }

            int64_t ClusterMetricsImpl::GetSentBytesCount()
            {
                return sentBytesCount;
            }

            int32_t ClusterMetricsImpl::GetSentMessagesCount()
            {
                return sentMessagesCount;
            }

            Timestamp ClusterMetricsImpl::GetStartTime()
            {
                return startTime;
            }

            int64_t ClusterMetricsImpl::GetTotalBusyTime()
            {
                return uptime - totalIdleTime;
            }

            int32_t ClusterMetricsImpl::GetTotalCancelledJobs()
            {
                return totalCancelledJobs;
            }

            int32_t ClusterMetricsImpl::GetTotalCpus()
            {
                return totalCpus;
            }

            int32_t ClusterMetricsImpl::GetTotalExecutedJobs()
            {
                return totalExecutedJobs;
            }

            int32_t ClusterMetricsImpl::GetTotalExecutedTasks()
            {
                return totalExecutedTasks;
            }

            int64_t ClusterMetricsImpl::GetTotalIdleTime()
            {
                return totalIdleTime;
            }

            int32_t ClusterMetricsImpl::GetTotalNodes()
            {
                return totalNodes;
            }

            int64_t ClusterMetricsImpl::GetTotalRejectedJobs()
            {
                return totalRejectedJobs;
            }

            int64_t ClusterMetricsImpl::GetTotalStartedThreadCount()
            {
                return totalStartedThreadCount;
            }

            int64_t ClusterMetricsImpl::GetUpTime()
            {
                return uptime;
            }
        }
    }
}