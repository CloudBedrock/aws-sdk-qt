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

#include "listdeploymentgroupsrequest.h"
#include "listdeploymentgroupsrequest_p.h"
#include "listdeploymentgroupsresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListDeploymentGroupsRequest
 *
 * @brief  Implements CodeDeploy ListDeploymentGroups requests.
 *
 * @see    CodeDeployClient::listDeploymentGroups
 */

/**
 * @brief  Constructs a new ListDeploymentGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentGroupsResponse::ListDeploymentGroupsResponse(

/**
 * @brief  Constructs a new ListDeploymentGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeploymentGroupsRequest::ListDeploymentGroupsRequest(const ListDeploymentGroupsRequest &other)
    : CodeDeployRequest(new ListDeploymentGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeploymentGroupsRequest object.
 */
ListDeploymentGroupsRequest::ListDeploymentGroupsRequest()
    : CodeDeployRequest(new ListDeploymentGroupsRequestPrivate(CodeDeployRequest::ListDeploymentGroupsAction, this))
{

}

bool ListDeploymentGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeploymentGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeploymentGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * ListDeploymentGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeploymentGroupsRequestPrivate
 *
 * @brief  Private implementation for ListDeploymentGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentGroupsRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public ListDeploymentGroupsRequest instance.
 */
ListDeploymentGroupsRequestPrivate::ListDeploymentGroupsRequestPrivate(
    const CodeDeployRequest::Action action, ListDeploymentGroupsRequest * const q)
    : ListDeploymentGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeploymentGroupsRequest instance.
 */
ListDeploymentGroupsRequestPrivate::ListDeploymentGroupsRequestPrivate(
    const ListDeploymentGroupsRequestPrivate &other, ListDeploymentGroupsRequest * const q)
    : ListDeploymentGroupsPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
