
![image](./image.jpeg)

Issue Summary:

Duration: 

Start Time: December  10, 2023, 14:30 WAT

End Time: January 12, 2023, 03:45 WAT

Impact:
The outage affected our flagship video streaming service, causing a complete service disruption for 30% of our users. Users experienced prolonged buffering and inability to access content during the outage.

Root Cause:
The root cause of the outage was identified as a critical failure in the content delivery network (CDN) due to a misconfiguration during a routine maintenance task.

Timeline:

Issue Detection:
December 10, 2023, 14:45 WAT
The issue was detected through automated monitoring alerts indicating a sudden spike in error rates and latency on the streaming platform.

Actions Taken:

Investigated CDN Logs: Checked CDN logs for anomalies, but initial analysis did not reveal any significant issues.
Assumed Network Congestion: Initially, the assumption was network congestion due to increased user activity during peak hours.
Misleading Investigation Paths:

Focused on Database Queries: A preliminary investigation incorrectly led the team to suspect database issues, diverting attention from the actual problem in the CDN configuration.
Network Hardware Inspection: Due to initial suspicions of network congestion, unnecessary time was spent inspecting network hardware, delaying the identification of the true root cause.
Escalation:
December 10, 2023, 15:30 WAT
The incident was escalated to the senior infrastructure team when initial investigations failed to yield any concrete results.

Resolution:
December 11, 2023, 03:45 WAT
The misconfiguration in the CDN was identified and corrected. A rollback to the last known stable configuration was performed, restoring normal service operations.

Root Cause and Resolution:

Root Cause:
During routine CDN maintenance, a configuration change was inadvertently pushed to production, causing a disruption in the routing of video content. This misconfiguration led to increased latency and errors in content delivery.

Resolution:
The issue was resolved by rolling back the CDN configuration to the last known stable version. The rollback was followed by thorough testing to ensure that the correct configuration was reinstated without introducing new issues.

Corrective and Preventative Measures:

Improvements/Fixes:

Automated Configuration Checks: Implement automated checks to validate CDN configurations before and after maintenance tasks to prevent misconfigurations.
Enhanced Monitoring: Improve monitoring systems to provide real-time insights into CDN performance and detect anomalies promptly.
Communication Protocols: Establish clear communication protocols between development and operations teams to ensure accurate information exchange during incidents.

Tasks to Address the Issue:

Automated Rollback Procedures: Develop automated rollback procedures for critical systems to expedite the resolution of similar incidents.
Documentation Update: Enhance documentation related to CDN maintenance processes to emphasize the importance of thorough testing before pushing configuration changes.
Training and Awareness: Conduct training sessions to increase awareness among the team about the potential impact of seemingly routine maintenance tasks on critical infrastructure.
By implementing these corrective measures and addressing specific tasks, we aim to enhance the resilience of our systems, reduce downtime, and improve our incident response capabilities.
