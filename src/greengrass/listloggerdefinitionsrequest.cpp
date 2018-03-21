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

#include "listloggerdefinitionsrequest.h"
#include "listloggerdefinitionsrequest_p.h"
#include "listloggerdefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  ListLoggerDefinitionsRequest
 *
 * @brief  Implements Greengrass ListLoggerDefinitions requests.
 *
 * @see    GreengrassClient::listLoggerDefinitions
 */

/**
 * @brief  Constructs a new ListLoggerDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLoggerDefinitionsResponse::ListLoggerDefinitionsResponse(

/**
 * @brief  Constructs a new ListLoggerDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest(const ListLoggerDefinitionsRequest &other)
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListLoggerDefinitionsRequest object.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest()
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(GreengrassRequest::ListLoggerDefinitionsAction, this))
{

}

bool ListLoggerDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListLoggerDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListLoggerDefinitionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * ListLoggerDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLoggerDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListLoggerDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListLoggerDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListLoggerDefinitionsRequest instance.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListLoggerDefinitionsRequest * const q)
    : ListLoggerDefinitionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListLoggerDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListLoggerDefinitionsRequest instance.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const ListLoggerDefinitionsRequestPrivate &other, ListLoggerDefinitionsRequest * const q)
    : ListLoggerDefinitionsPrivate(other, q)
{

}
