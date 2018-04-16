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

#include "getuploadrequest.h"
#include "getuploadrequest_p.h"
#include "getuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetUploadRequest
 *
 * \brief The GetUploadRequest class encapsulates DeviceFarm GetUpload requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getUpload
 */

/*!
 * @brief  Constructs a new GetUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUploadRequest::GetUploadRequest(const GetUploadRequest &other)
    : DeviceFarmRequest(new GetUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetUploadRequest object.
 */
GetUploadRequest::GetUploadRequest()
    : DeviceFarmRequest(new GetUploadRequestPrivate(DeviceFarmRequest::GetUploadAction, this))
{

}

/*!
 * \reimp
 */
bool GetUploadRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUploadResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUploadRequest::response(QNetworkReply * const reply) const
{
    return new GetUploadResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetUploadRequestPrivate
 *
 * @brief  Private implementation for GetUploadRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetUploadRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetUploadRequest instance.
 */
GetUploadRequestPrivate::GetUploadRequestPrivate(
    const DeviceFarmRequest::Action action, GetUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUploadRequest instance.
 */
GetUploadRequestPrivate::GetUploadRequestPrivate(
    const GetUploadRequestPrivate &other, GetUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
