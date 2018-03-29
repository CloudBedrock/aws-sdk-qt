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

#include "creategeomatchsetrequest.h"
#include "creategeomatchsetrequest_p.h"
#include "creategeomatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  CreateGeoMatchSetRequest
 *
 * @brief  Implements WAFRegional CreateGeoMatchSet requests.
 *
 * @see    WAFRegionalClient::createGeoMatchSet
 */

/**
 * @brief  Constructs a new CreateGeoMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGeoMatchSetRequest::CreateGeoMatchSetRequest(const CreateGeoMatchSetRequest &other)
    : WAFRegionalRequest(new CreateGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGeoMatchSetRequest object.
 */
CreateGeoMatchSetRequest::CreateGeoMatchSetRequest()
    : WAFRegionalRequest(new CreateGeoMatchSetRequestPrivate(WAFRegionalRequest::CreateGeoMatchSetAction, this))
{

}

bool CreateGeoMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGeoMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGeoMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateGeoMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGeoMatchSetRequestPrivate
 *
 * @brief  Private implementation for CreateGeoMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGeoMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public CreateGeoMatchSetRequest instance.
 */
CreateGeoMatchSetRequestPrivate::CreateGeoMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, CreateGeoMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGeoMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGeoMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGeoMatchSetRequest instance.
 */
CreateGeoMatchSetRequestPrivate::CreateGeoMatchSetRequestPrivate(
    const CreateGeoMatchSetRequestPrivate &other, CreateGeoMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
