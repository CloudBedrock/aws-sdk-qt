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

#include "listdeploymentconfigsrequest.h"
#include "listdeploymentconfigsrequest_p.h"
#include "listdeploymentconfigsresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListDeploymentConfigsRequest
 *
 * @brief  Implements CodeDeploy ListDeploymentConfigs requests.
 *
 * @see    CodeDeployClient::listDeploymentConfigs
 */

/**
 * @brief  Constructs a new ListDeploymentConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentConfigsResponse::ListDeploymentConfigsResponse(

/**
 * @brief  Constructs a new ListDeploymentConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeploymentConfigsRequest::ListDeploymentConfigsRequest(const ListDeploymentConfigsRequest &other)
    : CodeDeployRequest(new ListDeploymentConfigsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeploymentConfigsRequest object.
 */
ListDeploymentConfigsRequest::ListDeploymentConfigsRequest()
    : CodeDeployRequest(new ListDeploymentConfigsRequestPrivate(CodeDeployRequest::ListDeploymentConfigsAction, this))
{

}

bool ListDeploymentConfigsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeploymentConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeploymentConfigsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * ListDeploymentConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentConfigsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeploymentConfigsRequestPrivate
 *
 * @brief  Private implementation for ListDeploymentConfigsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentConfigsRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public ListDeploymentConfigsRequest instance.
 */
ListDeploymentConfigsRequestPrivate::ListDeploymentConfigsRequestPrivate(
    const CodeDeployRequest::Action action, ListDeploymentConfigsRequest * const q)
    : ListDeploymentConfigsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeploymentConfigsRequest instance.
 */
ListDeploymentConfigsRequestPrivate::ListDeploymentConfigsRequestPrivate(
    const ListDeploymentConfigsRequestPrivate &other, ListDeploymentConfigsRequest * const q)
    : ListDeploymentConfigsPrivate(other, q)
{

}
