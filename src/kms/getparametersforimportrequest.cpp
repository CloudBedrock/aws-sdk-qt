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

#include "getparametersforimportrequest.h"
#include "getparametersforimportrequest_p.h"
#include "getparametersforimportresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  GetParametersForImportRequest
 *
 * @brief  Implements KMS GetParametersForImport requests.
 *
 * @see    KMSClient::getParametersForImport
 */

/**
 * @brief  Constructs a new GetParametersForImportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetParametersForImportRequest::GetParametersForImportRequest(const GetParametersForImportRequest &other)
    : KMSRequest(new GetParametersForImportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetParametersForImportRequest object.
 */
GetParametersForImportRequest::GetParametersForImportRequest()
    : KMSRequest(new GetParametersForImportRequestPrivate(KMSRequest::GetParametersForImportAction, this))
{

}

bool GetParametersForImportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetParametersForImportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetParametersForImportResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetParametersForImportRequest::response(QNetworkReply * const reply) const
{
    return new GetParametersForImportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetParametersForImportRequestPrivate
 *
 * @brief  Private implementation for GetParametersForImportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersForImportRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public GetParametersForImportRequest instance.
 */
GetParametersForImportRequestPrivate::GetParametersForImportRequestPrivate(
    const KMSRequest::Action action, GetParametersForImportRequest * const q)
    : KMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersForImportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetParametersForImportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetParametersForImportRequest instance.
 */
GetParametersForImportRequestPrivate::GetParametersForImportRequestPrivate(
    const GetParametersForImportRequestPrivate &other, GetParametersForImportRequest * const q)
    : KMSRequestPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
