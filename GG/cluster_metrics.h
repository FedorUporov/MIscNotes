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

 /**
  * @file
  * Declares ignite::cluster::ClusterMetrics class.
  */

#ifndef _IGNITE_CLUSTER_CLUSTER_METRICS
#define _IGNITE_CLUSTER_CLUSTER_METRICS

#include <ignite/impl/cluster/cluster_metrics_impl.h>

namespace ignite
{
    namespace cluster
    {
        /**
         * This class represents runtime information on a cluster.
         * Apart from obvious statistical value, this information is used for implementation of load balancing, failover, and collision SPIs.
         * For example, collision SPI in combination with fail-over SPI could check if other nodes don't have any active or waiting jobs and fail-over some jobs to those nodes.
         */
        class IGNITE_IMPORT_EXPORT ClusterMetrics
        {
        public:
            /**
             * Constructor.
             *
             * @param impl Pointer to cluster metrics implementation.
             */
            ClusterMetrics(common::concurrent::SharedPointer<ignite::impl::cluster::ClusterMetricsImpl> impl);

            /**
             * Get average number of active jobs concurrently executing on the node.
             *
             * @return Average number of active jobs.
             */
            float GetAverageActiveJobs();

            /**
             * Get average number of cancelled jobs this node ever had running concurrently.
             *
             * @return Average number of cancelled jobs.
             */
            float GetAverageCancelledJobs();

            /**
             * Get average of CPU load values over all metrics kept in the history.
             *
             * @return Average of CPU load values.
             */
            double GetAverageCpuLoad();

            /**
             * Get average time a job takes to execute on the node.
             *
             * @return Average time a job takes to execute on the node.
             */
            double GetAverageJobExecuteTime();

            /**
             * Get average time jobs spend waiting in the queue to be executed.
             *
             * @return Average time jobs spend waiting in the queue to be executed.
             */
            double GetAverageJobWaitTime();

            /**
             * Get average number of jobs this node rejects during collision resolution operations.
             *
             * @return Average number of jobs this node rejects during collision resolution operations.
             */
            float GetAverageRejectedJobs();

            /**
             * Get average number of waiting jobs this node had queued.
             *
             * @return Average number of waiting jobs this node had queued.
             */
            float GetAverageWaitingJobs();

            /**
             * Get percentage of time this node is busy executing jobs vs.idling.
             *
             * @return Percentage of time this node is busy executing jobs vs.idling.
             */
            float GetBusyTimePercentage();

            /**
             * Get number of currently active jobs concurrently executing on the node.
             *
             * @return Number of currently active jobs concurrently executing on the node.
             */
            int32_t GetCurrentActiveJobs();

            /**
             * Get number of cancelled jobs that are still running.
             *
             * @return Number of cancelled jobs that are still running.
             */
            int32_t GetCurrentCancelledJobs();

            /**
             * Return the CPU usage in[0, 1] range.
             *
             * @return The CPU usage in[0, 1] range.
             */
            double GetCurrentCpuLoad();

            /**
             * Return the current number of live daemon threads.
             *
             * @return The current number of live daemon threads.
             */
            int32_t GetCurrentDaemonThreadCount();

            /**
             * Return average time spent in CG since the last update.
             *
             * @return Average time spent in CG since the last update.
             */
            double GetCurrentGcCpuLoad();

            /**
             * Get time this node spend idling since executing last job.
             *
             * @return Time this node spend idling since executing last job.
             */
            int64_t GetCurrentIdleTime();

            /**
             * Get longest time a current job has been executing for.
             *
             * @return Longest time a current job has been executing for.
             */
            int64_t GetCurrentJobExecuteTime();

            /**
             * Get current time an oldest jobs has spent waiting to be executed.
             *
             * @return Current time an oldest jobs has spent waiting to be executed.
             */
            int64_t GetCurrentJobWaitTime();

            /**
             * Get number of jobs rejected after more recent collision resolution operation.
             *
             * @return Number of jobs rejected after more recent collision resolution operation.
             */
            int32_t GetCurrentRejectedJobs();

            /**
             * Return the current number of live threads including both daemonand non-daemon threads.
             *
             * @return Current number of live threads including both daemonand non-daemon threads.
             */
            int32_t GetCurrentThreadCount();

            /**
             * Get number of queued jobs currently waiting to be executed.
             *
             * @return Number of queued jobs currently waiting to be executed.
             */
            int32_t GetCurrentWaitingJobs();

            /**
             * Return the amount of heap memory in bytes that is committed for the JVM to use.
             *
             * @return Amount of heap memory in bytes that is committed for the JVM to use.
             */
            int64_t GetHeapMemoryCommitted();

            /**
             * Return the amount of heap memory in bytes that the JVM initially requests from the OS.
             *
             * @return Amount of heap memory in bytes that the JVM initially requests from the OS.
             */
            int64_t GetHeapMemoryInitialized();

            /**
             * Return the maximum amount of heap memory in bytes that can be used for memory management.
             *
             * @return Maximum amount of heap memory in bytes that can be used for memory management.
             */
            int64_t GetHeapMemoryMaximum();

            /**
             * Return the total amount of heap memory in bytes.
             *
             * @return Total amount of heap memory in bytes.
             */
            int64_t GetHeapMemoryTotal();

            /**
             * Return the current heap size that is used for object allocation.
             *
             * @return Current heap size that is used for object allocation.
             */
            int64_t GetHeapMemoryUsed();

            /**
             * Get percentage of time this node is idling vs.executing jobs.
             *
             * @return Percentage of time this node is idling vs.executing jobs.
             */
            float GetIdleTimePercentage();

            /**
             * In-Memory Data Grid assigns incremental versions to all cache operations.
             *
             * @return Last incremental version.
             */
            int64_t GetLastDataVersion();

            /**
             * Get last update time of this node metrics.
             *
             * @return Last update time of this node metrics.
             */
            Timestamp GetLastUpdateTime();

            /**
             * Get maximum number of jobs that ever ran concurrently on this node.
             *
             * @return Maximum number of jobs that ever ran concurrently on this node.
             */
            int32_t GetMaximumActiveJobs();

            /**
             * Get maximum number of cancelled jobs this node ever had running concurrently.
             *
             * @return Maximum number of cancelled jobs this node ever had running concurrently.
             */
            int32_t GetMaximumCancelledJobs();

            /**
             * Get time it took to execute the longest job on the node.
             *
             * @return Time it took to execute the longest job on the node.
             */
            int64_t GetMaximumJobExecuteTime();

            /**
             * Get maximum time a job ever spent waiting in a queue to be executed.
             *
             * @return Maximum time a job ever spent waiting in a queue to be executed.
             */
            int64_t GetMaximumJobWaitTime();

            /**
             * Get maximum number of jobs rejected at once during a single collision resolution operation.
             *
             * @return Maximum number of jobs rejected at once during a single collision resolution operation.
             */
            int32_t GetMaximumRejectedJobs();

            /**
             * Return the maximum live thread count since the JVM started or peak was reset.
             *
             * @return Maximum live thread count since the JVM started or peak was reset.
             */
            int32_t GetMaximumThreadCount();

            /**
             * Get maximum number of waiting jobs this node had.
             *
             * @return Maximum number of waiting jobs this node had.
             */
            int32_t GetMaximumWaitingJobs();

            /**
             * Return the start time of grid node.
             *
             * @return Start time of grid node.
             */
            Timestamp GetNodeStartTime();

            /**
             * Return the amount of non-heap memory in bytes that is committed for the JVM to use.
             *
             * @return Amount of non-heap memory in bytes that is committed for the JVM to use.
             */
            int64_t GetNonHeapMemoryCommitted();

            /**
             * Return the amount of non-heap memory in bytes that the JVM initially requests from the OS.
             *
             * @return Amount of non-heap memory in bytes that the JVM initially requests from the OS.
             */
            int64_t GetNonHeapMemoryInitialized();

            /**
             * Return the maximum amount of non-heap memory in bytes that can be used for memory management.
             *
             * @return Maximum amount of non-heap memory in bytes that can be used for memory management.
             */
            int64_t GetNonHeapMemoryMaximum();

            /**
             * Return the total amount of non-heap memory in bytes that can be used for memory management.
             *
             * @return Total amount of non-heap memory in bytes that can be used for memory management.
             */
            int64_t GetNonHeapMemoryTotal();

            /**
             * Return the current non-heap memory size that is used by Java VM.
             *
             * @return Current non-heap memory size that is used by Java VM.
             */
            int64_t GetNonHeapMemoryUsed();

            /**
             * Get outbound messages queue size.
             *
             * @return Outbound messages queue size.
             */
            int32_t GetOutboundMessagesQueueSize();

            /**
             * Get received bytes count.
             *
             * @return Received bytes count.
             */
            int64_t GetReceivedBytesCount();

            /**
             * Get received messages count.
             *
             * @return Received messages count.
             */
            int32_t GetReceivedMessagesCount();

            /**
             * Get sent bytes count.
             *
             * @return Sent bytes count.
             */
            int64_t GetSentBytesCount();

            /**
             * Get sent messages count.
             *
             * @return Sent messages count.
             */
            int32_t GetSentMessagesCount();

            /**
             * Return the start time of the JVM.
             *
             * @return Start time of the JVM.
             */
            Timestamp GetStartTime();

            /**
             * Get total time this node spent executing jobs.
             *
             * @return Total time this node spent executing jobs.
             */
            int64_t GetTotalBusyTime();

            /**
             * Get number of cancelled jobs since node startup.
             *
             * @return Number of cancelled jobs since node startup.
             */
            int32_t GetTotalCancelledJobs();

            /**
             * Return the number of CPUs available to the Java Virtual Machine.
             *
             * @return Number of CPUs available to the Java Virtual Machine.
             */
            int32_t GetTotalCpus();

            /**
             * Get total number of jobs handled by the node since node startup.
             *
             * @return Number of jobs handled by the node since node startup.
             */
            int32_t GetTotalExecutedJobs();

            /**
             * Get total number of tasks handled by the node.
             *
             * @return Total number of tasks handled by the node.
             */
            int32_t GetTotalExecutedTasks();

            /**
             * Get total time this node spent idling(not executing any jobs).
             *
             * @return Total time this node spent idling.
             */
            int64_t GetTotalIdleTime();

            /**
             * Get total number of nodes.
             *
             * @return Total number of nodes.
             */
            int32_t GetTotalNodes();

            /**
             * Get total number of jobs this node rejects during collision resolution operations since node startup.
             *
             * @return Total number of jobs this node rejects during collision resolution operations since node startup.
             */
            int64_t GetTotalRejectedJobs();

            /**
             * Return the total number of threads createdand also started since the JVM started.
             *
             * @return Total number of threads createdand also started since the JVM started.
             */
            int64_t GetTotalStartedThreadCount();

            /**
             * Return the uptime of the JVM in milliseconds.
             *
             * @return Uptime of the JVM in milliseconds.
             */
            int64_t GetUpTime();

        private:
            common::concurrent::SharedPointer<ignite::impl::cluster::ClusterMetricsImpl> impl;
        };
    }
}

#endif //_IGNITE_CLUSTER_CLUSTER_NODE