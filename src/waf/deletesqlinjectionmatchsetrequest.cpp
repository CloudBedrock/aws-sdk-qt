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

#include "deletesqlinjectionmatchsetrequest.h"
#include "deletesqlinjectionmatchsetrequest_p.h"
#include "deletesqlinjectionmatchsetresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  DeleteSqlInjectionMatchSetRequest
 *
 * @brief  Implements WAF DeleteSqlInjectionMatchSet requests.
 *
 * @see    WAFClient::deleteSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new DeleteSqlInjectionMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSqlInjectionMatchSetResponse::DeleteSqlInjectionMatchSetResponse(

/**
 * @brief  Constructs a new DeleteSqlInjectionMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSqlInjectionMatchSetRequest::DeleteSqlInjectionMatchSetRequest(const DeleteSqlInjectionMatchSetRequest &other)
    : WAFRequest(new DeleteSqlInjectionMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSqlInjectionMatchSetRequest object.
 */
DeleteSqlInjectionMatchSetRequest::DeleteSqlInjectionMatchSetRequest()
    : WAFRequest(new DeleteSqlInjectionMatchSetRequestPrivate(WAFRequest::DeleteSqlInjectionMatchSetAction, this))
{

}

bool DeleteSqlInjectionMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSqlInjectionMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSqlInjectionMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * DeleteSqlInjectionMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSqlInjectionMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSqlInjectionMatchSetRequestPrivate
 *
 * @brief  Private implementation for DeleteSqlInjectionMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSqlInjectionMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteSqlInjectionMatchSetRequest instance.
 */
DeleteSqlInjectionMatchSetRequestPrivate::DeleteSqlInjectionMatchSetRequestPrivate(
    const WAFRequest::Action action, DeleteSqlInjectionMatchSetRequest * const q)
    : DeleteSqlInjectionMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSqlInjectionMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSqlInjectionMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSqlInjectionMatchSetRequest instance.
 */
DeleteSqlInjectionMatchSetRequestPrivate::DeleteSqlInjectionMatchSetRequestPrivate(
    const DeleteSqlInjectionMatchSetRequestPrivate &other, DeleteSqlInjectionMatchSetRequest * const q)
    : DeleteSqlInjectionMatchSetPrivate(other, q)
{

}
