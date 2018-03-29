/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GUARDDUTYCLIENT_H
#define QTAWS_GUARDDUTYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace GuardDuty {

class GuardDutyClientPrivate;
class AcceptInvitationRequest;
class AcceptInvitationResponse;
class ArchiveFindingsRequest;
class ArchiveFindingsResponse;
class CreateDetectorRequest;
class CreateDetectorResponse;
class CreateIPSetRequest;
class CreateIPSetResponse;
class CreateMembersRequest;
class CreateMembersResponse;
class CreateSampleFindingsRequest;
class CreateSampleFindingsResponse;
class CreateThreatIntelSetRequest;
class CreateThreatIntelSetResponse;
class DeclineInvitationsRequest;
class DeclineInvitationsResponse;
class DeleteDetectorRequest;
class DeleteDetectorResponse;
class DeleteIPSetRequest;
class DeleteIPSetResponse;
class DeleteInvitationsRequest;
class DeleteInvitationsResponse;
class DeleteMembersRequest;
class DeleteMembersResponse;
class DeleteThreatIntelSetRequest;
class DeleteThreatIntelSetResponse;
class DisassociateFromMasterAccountRequest;
class DisassociateFromMasterAccountResponse;
class DisassociateMembersRequest;
class DisassociateMembersResponse;
class GetDetectorRequest;
class GetDetectorResponse;
class GetFindingsRequest;
class GetFindingsResponse;
class GetFindingsStatisticsRequest;
class GetFindingsStatisticsResponse;
class GetIPSetRequest;
class GetIPSetResponse;
class GetInvitationsCountRequest;
class GetInvitationsCountResponse;
class GetMasterAccountRequest;
class GetMasterAccountResponse;
class GetMembersRequest;
class GetMembersResponse;
class GetThreatIntelSetRequest;
class GetThreatIntelSetResponse;
class InviteMembersRequest;
class InviteMembersResponse;
class ListDetectorsRequest;
class ListDetectorsResponse;
class ListFindingsRequest;
class ListFindingsResponse;
class ListIPSetsRequest;
class ListIPSetsResponse;
class ListInvitationsRequest;
class ListInvitationsResponse;
class ListMembersRequest;
class ListMembersResponse;
class ListThreatIntelSetsRequest;
class ListThreatIntelSetsResponse;
class StartMonitoringMembersRequest;
class StartMonitoringMembersResponse;
class StopMonitoringMembersRequest;
class StopMonitoringMembersResponse;
class UnarchiveFindingsRequest;
class UnarchiveFindingsResponse;
class UpdateDetectorRequest;
class UpdateDetectorResponse;
class UpdateFindingsFeedbackRequest;
class UpdateFindingsFeedbackResponse;
class UpdateIPSetRequest;
class UpdateIPSetResponse;
class UpdateThreatIntelSetRequest;
class UpdateThreatIntelSetResponse;

class QTAWS_EXPORT GuardDutyClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GuardDutyClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GuardDutyClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInvitationResponse * acceptInvitation(const AcceptInvitationRequest &request);
    ArchiveFindingsResponse * archiveFindings(const ArchiveFindingsRequest &request);
    CreateDetectorResponse * createDetector(const CreateDetectorRequest &request);
    CreateIPSetResponse * createIPSet(const CreateIPSetRequest &request);
    CreateMembersResponse * createMembers(const CreateMembersRequest &request);
    CreateSampleFindingsResponse * createSampleFindings(const CreateSampleFindingsRequest &request);
    CreateThreatIntelSetResponse * createThreatIntelSet(const CreateThreatIntelSetRequest &request);
    DeclineInvitationsResponse * declineInvitations(const DeclineInvitationsRequest &request);
    DeleteDetectorResponse * deleteDetector(const DeleteDetectorRequest &request);
    DeleteIPSetResponse * deleteIPSet(const DeleteIPSetRequest &request);
    DeleteInvitationsResponse * deleteInvitations(const DeleteInvitationsRequest &request);
    DeleteMembersResponse * deleteMembers(const DeleteMembersRequest &request);
    DeleteThreatIntelSetResponse * deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request);
    DisassociateFromMasterAccountResponse * disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request);
    DisassociateMembersResponse * disassociateMembers(const DisassociateMembersRequest &request);
    GetDetectorResponse * getDetector(const GetDetectorRequest &request);
    GetFindingsResponse * getFindings(const GetFindingsRequest &request);
    GetFindingsStatisticsResponse * getFindingsStatistics(const GetFindingsStatisticsRequest &request);
    GetIPSetResponse * getIPSet(const GetIPSetRequest &request);
    GetInvitationsCountResponse * getInvitationsCount(const GetInvitationsCountRequest &request);
    GetMasterAccountResponse * getMasterAccount(const GetMasterAccountRequest &request);
    GetMembersResponse * getMembers(const GetMembersRequest &request);
    GetThreatIntelSetResponse * getThreatIntelSet(const GetThreatIntelSetRequest &request);
    InviteMembersResponse * inviteMembers(const InviteMembersRequest &request);
    ListDetectorsResponse * listDetectors(const ListDetectorsRequest &request);
    ListFindingsResponse * listFindings(const ListFindingsRequest &request);
    ListIPSetsResponse * listIPSets(const ListIPSetsRequest &request);
    ListInvitationsResponse * listInvitations(const ListInvitationsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListThreatIntelSetsResponse * listThreatIntelSets(const ListThreatIntelSetsRequest &request);
    StartMonitoringMembersResponse * startMonitoringMembers(const StartMonitoringMembersRequest &request);
    StopMonitoringMembersResponse * stopMonitoringMembers(const StopMonitoringMembersRequest &request);
    UnarchiveFindingsResponse * unarchiveFindings(const UnarchiveFindingsRequest &request);
    UpdateDetectorResponse * updateDetector(const UpdateDetectorRequest &request);
    UpdateFindingsFeedbackResponse * updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request);
    UpdateIPSetResponse * updateIPSet(const UpdateIPSetRequest &request);
    UpdateThreatIntelSetResponse * updateThreatIntelSet(const UpdateThreatIntelSetRequest &request);

private:
    Q_DECLARE_PRIVATE(GuardDutyClient)
    Q_DISABLE_COPY(GuardDutyClient)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
