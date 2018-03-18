/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "workmailclient.h"
#include "workmailclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace WorkMail {

/**
 * @class  WorkMailClient
 *
 * @brief  Client for Amazon WorkMail
 *
 * Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 * email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or their native
 * iOS and Android email applications. You can integrate Amazon WorkMail with your existing corporate directory and control
 * both the keys that encrypt your data and the location in which your data is
 *
 * stored>
 *
 * The Amazon WorkMail API is designed for the following
 *
 * scenarios> <ul> <li>
 *
 * Listing and describing
 *
 * organization> </li> </ul> <ul> <li>
 *
 * Managing
 *
 * user> </li> </ul> <ul> <li>
 *
 * Managing
 *
 * group> </li> </ul> <ul> <li>
 *
 * Managing
 *
 * resource> </li> </ul>
 *
 * All Amazon WorkMail API actions are Amazon-authenticated and certificate-signed. They not only require the use of the
 * AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 * policies. By creating a role and allowing an IAM user to access the Amazon WorkMail site, the IAM user gains full
 * administrative visibility into the entire Amazon WorkMail organization (or as set in the IAM policy). This includes, but
 * is not limited to, the ability to create, update, and delete users, groups, and resources. This allows developers to
 * perform the scenarios listed above, as well as give users the ability to grant access on a selective basis using the IAM
 */

/**
 * @brief  Constructs a new WorkMailClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
WorkMailClient::WorkMailClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WorkMailClientPrivate(this), parent)
{
    Q_D(WorkMailClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new WorkMailClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
WorkMailClient::WorkMailClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WorkMailClientPrivate(this), parent)
{
    Q_D(WorkMailClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Adds a member to the resource's set of
 */
AssociateDelegateToResourceResponse * WorkMailClient::associateDelegateToResource(const AssociateDelegateToResourceRequest &request)
{

}

/**
 * Adds a member to the group's
 */
AssociateMemberToGroupResponse * WorkMailClient::associateMemberToGroup(const AssociateMemberToGroupRequest &request)
{

}

/**
 * Adds an alias to the set of a given member of Amazon
 */
CreateAliasResponse * WorkMailClient::createAlias(const CreateAliasRequest &request)
{

}

/**
 * Creates a group that can be used in Amazon WorkMail by calling the RegisterToWorkMail
 */
CreateGroupResponse * WorkMailClient::createGroup(const CreateGroupRequest &request)
{

}

/**
 * Creates a new Amazon WorkMail resource. The available types are equipment and
 */
CreateResourceResponse * WorkMailClient::createResource(const CreateResourceRequest &request)
{

}

/**
 * Creates a user who can be used in Amazon WorkMail by calling the RegisterToWorkMail
 */
CreateUserResponse * WorkMailClient::createUser(const CreateUserRequest &request)
{

}

/**
 * Remove the alias from a set of aliases for a given
 */
DeleteAliasResponse * WorkMailClient::deleteAlias(const DeleteAliasRequest &request)
{

}

/**
 * Deletes a group from Amazon
 */
DeleteGroupResponse * WorkMailClient::deleteGroup(const DeleteGroupRequest &request)
{

}

/**
 * Deletes the specified resource.
 */
DeleteResourceResponse * WorkMailClient::deleteResource(const DeleteResourceRequest &request)
{

}

/**
 * Deletes a user from Amazon WorkMail and all subsequent systems. The action can't be undone. The mailbox is kept as-is
 * for a minimum of 30 days, without any means to restore it.
 */
DeleteUserResponse * WorkMailClient::deleteUser(const DeleteUserRequest &request)
{

}

/**
 * Mark a user, group, or resource as no longer used in Amazon WorkMail. This action disassociates the mailbox and
 * schedules it for clean-up. Amazon WorkMail keeps mailboxes for 30 days before they are permanently removed. The
 * functionality in the console is
 */
DeregisterFromWorkMailResponse * WorkMailClient::deregisterFromWorkMail(const DeregisterFromWorkMailRequest &request)
{

}

/**
 * Returns the data available for the
 */
DescribeGroupResponse * WorkMailClient::describeGroup(const DescribeGroupRequest &request)
{

}

/**
 * Provides more information regarding a given organization based on its
 */
DescribeOrganizationResponse * WorkMailClient::describeOrganization(const DescribeOrganizationRequest &request)
{

}

/**
 * Returns the data available for the
 */
DescribeResourceResponse * WorkMailClient::describeResource(const DescribeResourceRequest &request)
{

}

/**
 * Provides information regarding the
 */
DescribeUserResponse * WorkMailClient::describeUser(const DescribeUserRequest &request)
{

}

/**
 * Removes a member from the resource's set of
 */
DisassociateDelegateFromResourceResponse * WorkMailClient::disassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest &request)
{

}

/**
 * Removes a member from a
 */
DisassociateMemberFromGroupResponse * WorkMailClient::disassociateMemberFromGroup(const DisassociateMemberFromGroupRequest &request)
{

}

/**
 * Creates a paginated call to list the aliases associated with a given
 */
ListAliasesResponse * WorkMailClient::listAliases(const ListAliasesRequest &request)
{

}

/**
 * Returns an overview of the members of a
 */
ListGroupMembersResponse * WorkMailClient::listGroupMembers(const ListGroupMembersRequest &request)
{

}

/**
 * Returns summaries of the organization's
 */
ListGroupsResponse * WorkMailClient::listGroups(const ListGroupsRequest &request)
{

}

/**
 * Returns summaries of the customer's non-deleted
 */
ListOrganizationsResponse * WorkMailClient::listOrganizations(const ListOrganizationsRequest &request)
{

}

/**
 * Lists the delegates associated with a resource. Users and groups can be resource delegates and answer requests on behalf
 * of the
 */
ListResourceDelegatesResponse * WorkMailClient::listResourceDelegates(const ListResourceDelegatesRequest &request)
{

}

/**
 * Returns summaries of the organization's
 */
ListResourcesResponse * WorkMailClient::listResources(const ListResourcesRequest &request)
{

}

/**
 * Returns summaries of the organization's
 */
ListUsersResponse * WorkMailClient::listUsers(const ListUsersRequest &request)
{

}

/**
 * Registers an existing and disabled user, group, or resource/entity for Amazon WorkMail use by associating a mailbox and
 * calendaring capabilities. It performs no change if the entity is enabled and fails if the entity is deleted. This
 * operation results in the accumulation of costs. For more information, see <a
 * href="http://aws.amazon.com/workmail/pricing">Pricing</a>. The equivalent console functionality for this operation is
 * <i>Enable</i>. Users can either be created by calling the CreateUser API or they can be synchronized from your
 * directory. For more information, see
 */
RegisterToWorkMailResponse * WorkMailClient::registerToWorkMail(const RegisterToWorkMailRequest &request)
{

}

/**
 * Allows the administrator to reset the password for a
 */
ResetPasswordResponse * WorkMailClient::resetPassword(const ResetPasswordRequest &request)
{

}

/**
 * Updates the primary email for an entity. The current email is moved into the list of aliases (or swapped between an
 * existing alias and the current primary email) and the email provided in the input is promoted as the
 */
UpdatePrimaryEmailAddressResponse * WorkMailClient::updatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest &request)
{

}

/**
 * Updates data for the resource. It must be preceded by a describe call in order to have the latest information. The
 * dataset in the request should be the one expected when performing another describe
 */
UpdateResourceResponse * WorkMailClient::updateResource(const UpdateResourceRequest &request)
{

}

/**
 * @internal
 *
 * @class  WorkMailClientPrivate
 *
 * @brief  Private implementation for WorkMailClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkMailClientPrivate object.
 *
 * @param  q  Pointer to this object's public WorkMailClient instance.
 */
WorkMailClientPrivate::WorkMailClientPrivate(WorkMailClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace WorkMail
} // namespace AWS
