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

#include "createfilesystemrequest.h"
#include "createfilesystemrequest_p.h"
#include "createfilesystemresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::CreateFileSystemRequest
 *
 * \brief The CreateFileSystemRequest class provides an interface for EFS CreateFileSystem requests.
 *
 * \ingroup EFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EFSClient::createFileSystem
 */

/*!
 * @brief  Constructs a new CreateFileSystemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFileSystemRequest::CreateFileSystemRequest(const CreateFileSystemRequest &other)
    : EFSRequest(new CreateFileSystemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateFileSystemRequest object.
 */
CreateFileSystemRequest::CreateFileSystemRequest()
    : EFSRequest(new CreateFileSystemRequestPrivate(EFSRequest::CreateFileSystemAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFileSystemRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateFileSystemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFileSystemResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EFSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFileSystemRequest::response(QNetworkReply * const reply) const
{
    return new CreateFileSystemResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateFileSystemRequestPrivate
 *
 * @brief  Private implementation for CreateFileSystemRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateFileSystemRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public CreateFileSystemRequest instance.
 */
CreateFileSystemRequestPrivate::CreateFileSystemRequestPrivate(
    const EFSRequest::Action action, CreateFileSystemRequest * const q)
    : EFSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateFileSystemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFileSystemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFileSystemRequest instance.
 */
CreateFileSystemRequestPrivate::CreateFileSystemRequestPrivate(
    const CreateFileSystemRequestPrivate &other, CreateFileSystemRequest * const q)
    : EFSRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
